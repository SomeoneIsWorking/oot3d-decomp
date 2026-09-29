// OoT3D decomp @ 00236168  name=FUN_00236168  size=104

undefined4 FUN_00236168(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *unaff_r4;
  int iVar6;
  undefined4 *unaff_r6;
  undefined4 *unaff_r9;
  uint in_fpscr;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr13;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  float fVar7;
  float extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  float fVar8;
  float extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  short in_stack_0000002c;
  float in_stack_00000030;
  short sStack00000034;
  short sStack00000036;
  float in_stack_00000040;
  short sStack00000044;
  short sStack00000046;
  float fStack00000048;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  float in_stack_00000068;

  iVar1 = DAT_0023652c;
  coprocessor_function(10,8,2,in_cr0,in_cr0,in_cr1);
  coprocessor_function(10,8,3,in_cr0,in_cr0,in_cr8);
  coprocessor_function(10,0xf,1,in_cr0,in_cr0,in_cr10);
  coprocessor_movefromRt(10,5,0,in_cr13,in_cr0);
  fStack00000048 = (float)coprocessor_movefromRt(0,0,3,in_cr0,in_cr0);
  coprocessor_function(10,0xb,4,in_cr0,in_cr8,in_cr1);
  coprocessor_function(10,0xf,4,in_cr1,in_cr8,in_cr10);
  coprocessor_moveto(10,1,0,fStack00000048,in_cr0,in_cr8);
  coprocessor_store(6,in_cr0,&stack0x000003e4);
  uVar4 = unaff_r9[1];
  uVar5 = unaff_r9[2];
  *unaff_r6 = *unaff_r9;
  unaff_r6[1] = uVar4;
  unaff_r6[2] = uVar5;
  in_stack_00000068 = in_stack_00000068 + (float)((ulonglong)unaff_d9 >> 0x20);
  FUN_00372448();
  unaff_r4[4] = extraout_s0;
  unaff_r4[5] = extraout_s1;
  unaff_r4[6] = extraout_s2;
  fStack00000048 = (float)unaff_d9;
  iVar6 = 0;
  in_stack_00000040 =
       (((float)unaff_r6[1] + fStack00000048 * (float)((ulonglong)unaff_d8 >> 0x20)) -
       in_stack_00000030) + in_stack_00000030;
  FUN_00372448(unaff_r4 + 4,&stack0x00000040);
  in_stack_00000058 = extraout_s0_00;
  in_stack_0000005c = extraout_s1_00;
  in_stack_00000060 = extraout_s2_00;
  if ((*(ushort *)((int)unaff_r6 + 0x2e) & 0x80) == 0) {
    do {
      iVar3 = FUN_003317ac(unaff_r6[0x35],unaff_r6[0x35] + 0x5c78,unaff_r4 + 4,&stack0x00000058);
      uVar2 = in_stack_00000060;
      uVar5 = in_stack_0000005c;
      uVar4 = in_stack_00000058;
      if ((iVar3 == 0) && (iVar3 = FUN_003553fc(), iVar3 == 0)) break;
      sStack00000046 = *(short *)(DAT_00237870 + iVar6 * 2) + (short)unaff_r4;
      sStack00000044 = *(short *)(DAT_00237874 + iVar6 * 2) + in_stack_0000002c;
      in_stack_00000058 = uVar4;
      in_stack_0000005c = uVar5;
      in_stack_00000060 = uVar2;
      FUN_00372448(unaff_r4 + 4,&stack0x00000040);
      iVar6 = iVar6 + 1;
      in_stack_00000058 = extraout_s0_01;
      in_stack_0000005c = extraout_s1_01;
      in_stack_00000060 = extraout_s2_01;
    } while (iVar6 < 0xe);
  }
  *(ushort *)(iVar1 + 0x94) = *(ushort *)(iVar1 + 0x94) & 0xfff3;
  iVar1 = (*(short *)(unaff_r4 + 7) + 1) * (int)*(short *)(unaff_r4 + 7) >> 1;
  fVar7 = (float)VectorSignedToFloat((int)(short)(sStack00000046 - sStack00000036),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  unaff_r4[1] = fVar7 / fVar8;
  fVar8 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat((int)(short)(sStack00000044 - sStack00000034),
                                     (byte)(in_fpscr >> 0x15) & 3);
  unaff_r4[2] = fVar7 / fVar8;
  fVar7 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  *unaff_r4 = (in_stack_00000040 - in_stack_00000030) / fVar7;
  return 1;
}
