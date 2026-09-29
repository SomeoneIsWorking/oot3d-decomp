// OoT3D decomp @ 0027f994  name=FUN_0027f994  size=424

void FUN_0027f994(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;

  uVar2 = DAT_0027fb74;
  uVar4 = DAT_0027fb64;
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  *param_3 = param_4[1];
  param_3[1] = uVar6;
  param_3[2] = uVar7;
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  param_3[0xb] = param_4[5];
  param_3[0xc] = uVar6;
  param_3[0xd] = uVar7;
  param_3[8] = uVar4;
  param_3[7] = uVar4;
  param_3[6] = uVar4;
  param_3[5] = uVar4;
  param_3[4] = uVar4;
  param_3[3] = uVar4;
  fVar3 = DAT_0027fb7c;
  uVar4 = DAT_0027fb78;
  fVar8 = (float)VectorSignedToFloat(param_4[10],(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0027fb6c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar1 = (undefined2)(int)((fVar8 * DAT_0027fb68) / fVar9 + DAT_0027fb70);
  *(undefined2 *)(param_3 + 0x18) = uVar1;
  param_3[0xf] = *param_4;
  param_3[9] = uVar4;
  param_3[10] = uVar2;
  *(short *)(param_3 + 0x11) = (short)(int)((float)param_4[4] * fVar3);
  *(undefined2 *)((int)param_3 + 0x46) = uVar1;
  *(undefined2 *)(param_3 + 0x12) = 0xfff6;
  *(undefined2 *)((int)param_3 + 0x4a) = 0xfff1;
  if (*(short *)(param_4 + 8) == 0) {
    *(undefined2 *)(param_4 + 8) = 1;
  }
  *(undefined2 *)(param_3 + 0x13) = *(undefined2 *)(param_4 + 8);
  *(undefined2 *)((int)param_3 + 0x4e) = *(undefined2 *)((int)param_4 + 0x26);
  *(undefined2 *)(param_3 + 0x14) = *(undefined2 *)(param_4 + 9);
  iVar5 = 0;
  if (*(int *)(DAT_0027fb80 + param_1) != 0) {
    iVar5 = param_1 + 0x3a5c;
  }
  uVar4 = FUN_0033a904(param_1,0,1,100,0xffffffff);
  param_3[0x1b] = uVar4;
  if (*(short *)((int)param_4 + 0x22) == 0) {
    uVar4 = FUN_00372f0c(iVar5 + 0x10,0x38);
    FUN_00372d94(*(undefined4 *)(param_3[0x1b] + 0xc),uVar4);
  }
  else {
    uVar4 = FUN_00372f0c(iVar5 + 0x10,0x39);
    FUN_00372d94(*(undefined4 *)(param_3[0x1b] + 0xc),uVar4);
  }
  uVar4 = DAT_0027fb84;
  *(undefined1 *)(*(int *)(param_3[0x1b] + 0xc) + 0x10) = 1;
  *(undefined4 *)(*(int *)(param_3[0x1b] + 0xc) + 0xc) = uVar4;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
