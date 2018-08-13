/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flgivern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 15:36:20 by flgivern          #+#    #+#             */
/*   Updated: 2018/08/12 20:09:48 by flgivern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2);

int	main()
{
	char	*s0 = "";
	char	*s = "a";
	char	*s1 = "b";
	char	*s3 = "ab";
	char	*s4 = "*a";
	char	*s5 = "*******a";
	char	*s6 = "a*";
	char	*s7 = "***a****";
	char	*s8 = "abcdef";
	char	*s9 = "*a*f*";
	char	*s10 = "a*f";
	char	*s11 = "*d*";
	char	*s12 = "abc*";
	char	*s13 = "*a*b";
	char	*s14 = "*a*a";
	char	*s15 =	"a****a";
	char	*s16 = "*****aa";
	char	*s17 = "*a**c**de";
	char	*s18 = "THIS IS EV*L";
	char	*s19 = "THIS IS EV*";
	char	*s20 = "*TH*S* IS EV**L*";
	char	*s21 = "*TH*S* IS EV*L";
	char	*s22 = "THIS IS *";
	char	*s23 = "*T*L*";
	char	*s24 = "*S*S*";
	char	*s25 = "*TH*S* IS EV**L";
	char	*s26 = "*";
	char	*s27 = "abcdabcde";
	char	*s28 = "*abcde";
	char	*s29 = "abcdabcdabcdabcd";
	char	*s30 = "abcdabcdabcdabcdabc";
	char	*s31 = "abcdabcdabcdabcabcd";
	char	*s32 = "*abcd*abcd*abcd*";
	char	*s33 = "*abc*abcd";
	char	*s34 = "abcdabcdabcd*abc";
	char	*s35 = "abc**d*ab*c*d*a*b*c*d*a*b*ca*b*c***d";


	printf("= SHOULD MATCH =======================\n");
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s, s);
	printf("%d\n", match(s, s));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s, s4);
	printf("%d\n", match(s, s4));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s, s5);
	printf("%d\n", match(s, s5));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s, s6);
	printf("%d\n", match(s, s6));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s, s7);
	printf("%d\n", match(s, s7));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s8, s6);
	printf("%d\n", match(s8, s6));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s8, s26);
	printf("%d\n", match(s8, s26));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s8, s9);
	printf("%d\n", match(s8, s9));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s8, s10);
	printf("%d\n", match(s8, s11));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s8, s7);
	printf("%d\n", match(s8, s7));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s8, s11);
	printf("%d\n", match(s8, s11));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s8, s12);
	printf("%d\n", match(s8, s12));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s4, s26);
	printf("%d\n", match(s4, s26));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s18, s19);
	printf("%d\n", match(s18, s19));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s18, s20);
	printf("%d\n", match(s18, s20));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s18, s22);
	printf("%d\n", match(s18, s22));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s18, s23);
	printf("%d\n", match(s18, s23));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s18, s24);
	printf("%d\n", match(s18, s24));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s25, s23);
	printf("%d\n", match(s25, s23));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s25, s24);
	printf("%d\n", match(s25, s24));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s25, s21);
	printf("%d\n", match(s18, s24));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s26, s26);
	printf("%d\n", match(s18, s24));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s0, s26);
	printf("%d\n", match(s0, s26));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s27, s28);
	printf("%d\n", match(s27, s28));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s29, s33);
	printf("%d\n", match(s29, s33));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s30, s32);
	printf("%d\n", match(s30, s32));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s30, s34);
	printf("%d\n", match(s30, s34));	
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s31, s33);
	printf("%d\n", match(s31, s33));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s31, s35);
	printf("%d\n", match(s31, s35));
	
	printf("\n\n= SHOULD NOT MATCH =======================\n");
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s, s1);
	printf("%d\n", match(s, s1));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s, s3);
	printf("%d\n", match(s, s3));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s, s13);
	printf("%d\n", match(s, s13));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s, s14);
	printf("%d\n", match(s, s14));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s, s15);
	printf("%d\n", match(s, s15));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s, s16);
	printf("%d\n", match(s, s16));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s3, s14);
	printf("%d\n", match(s3, s14));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s8, s13);
	printf("%d\n", match(s8, s13));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s8, s17);
	printf("%d\n", match(s8, s17));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s20, s21);
	printf("%d\n", match(s20, s21));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s20, s25);
	printf("%d\n", match(s20, s25));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s19, s18);
	printf("%d\n", match(s19, s18));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s15, s16);
	printf("%d\n", match(s15, s16));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s9, s10);
	printf("%d\n", match(s9, s10));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s19, s25);
	printf("%d\n", match(s19, s25));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s26, s0);
	printf("%d\n", match(s26, s0));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s0, s5);
	printf("%d\n", match(s0, s5));
	printf("### Testing s1=\"%s\" and s2=\"%s\"\n", s0, s7);
	printf("%d\n", match(s0, s7));
}	
