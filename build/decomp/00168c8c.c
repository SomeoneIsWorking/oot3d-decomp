// OoT3D decomp @ 00168c8c  name=FUN_00168c8c  size=1132

/* WARNING: Type propagation algorithm not settling */

void FUN_00168c8c(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_294;
  undefined4 local_290;
  float *apfStack_28c [144];
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  float local_40 [3];
  float local_34;
  float fStack_30;
  float local_2c;

  FUN_00372f38(param_1,param_2,0);
  uVar2 = DAT_0016908c;
  FUN_00372d4c(param_1 + 0xbc,DAT_00169088);
  local_294 = 0xb;
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x464);
  FUN_003717ac(param_1 + 0x1a4,DAT_00169090,0);
  FUN_00350820(apfStack_28c,DAT_00169094,0x24,0x10);
  local_4c = (undefined1)DAT_00169098;
  local_4b = (undefined1)((uint)DAT_00169098 >> 8);
  local_44 = SUB41(DAT_0016909c,0);
  local_43 = (undefined1)((uint)DAT_0016909c >> 8);
  local_4a = (undefined1)((uint)DAT_00169098 >> 0x10);
  local_49 = (undefined1)((uint)DAT_00169098 >> 0x18);
  local_42 = (undefined1)((uint)DAT_0016909c >> 0x10);
  local_41 = (undefined1)((uint)DAT_0016909c >> 0x18);
  local_40[0] = DAT_0016909c;
  local_40[1] = 8.40779e-45;
  local_40[2] = 0.0;
  local_34 = (float)CONCAT31(local_34._1_3_,3);
  local_2c = (float)CONCAT31(local_2c._1_3_,0x16);
  local_48 = local_4c;
  local_47 = local_4b;
  local_46 = local_4a;
  local_45 = local_49;
  FUN_00350660(param_2,&local_294,1,0,0,&local_290);
  *(undefined4 *)(param_1 + 0x96c) = local_294;
  local_40[0] = *DAT_001690a0;
  local_40[1] = DAT_001690a0[1];
  local_40[2] = DAT_001690a0[2];
  local_34 = DAT_001690a0[3];
  fStack_30 = DAT_001690a0[4];
  local_2c = DAT_001690a0[5];
  iVar9 = 0;
  do {
    iVar10 = param_1 + iVar9 * 0x58 + 0x6a4;
    FUN_00353dd0(param_2,iVar10);
    FUN_00353d24(param_2,iVar10,param_1,local_40[iVar9]);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 6);
  *(undefined4 *)(param_1 + 0x6c4) = DAT_001690a4;
  *(undefined4 *)(param_1 + 0x71c) = DAT_001690a8;
  *(undefined1 *)(param_1 + 0x768) = 9;
  *(undefined1 *)(param_1 + 0x782) = 0xd;
  *(undefined1 *)(param_1 + 0x780) = 2;
  *(undefined4 *)(param_1 + 0x774) = DAT_001690ac;
  uVar4 = FUN_0035011c(2);
  FUN_00350318(param_1 + 0xa0,uVar4,DAT_001690b0);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0x8b4,param_1,DAT_001690b4,param_1 + 0x8d4);
  uVar5 = *(ushort *)(param_1 + 0x1c) & 0xf;
  *(uint *)(param_1 + 0x980) = ((uint)*(ushort *)(param_1 + 0x1c) << 0x17) >> 0x1f;
  *(short *)(param_1 + 0x1c) = (short)uVar5;
  if (uVar5 == 2) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
  }
  else if (uVar5 == 1) {
    *(undefined1 *)(param_1 + 0x123) = 5;
    goto LAB_00168f20;
  }
  *(undefined1 *)(param_1 + 0x123) = 4;
LAB_00168f20:
  local_40[1] = *(float *)(param_1 + 0x28);
  apfStack_28c[0] = &fStack_30;
  local_40[2] = *(float *)(param_1 + 0x2c) + DAT_001690b8;
  local_34 = *(float *)(param_1 + 0x30);
  local_290 = 1;
  local_294 = 1;
  iVar9 = FUN_00369f9c(param_2 + 0xa98,param_1 + 0x28,local_40 + 1,param_1 + 0x958,&local_2c,0,0);
  fVar1 = DAT_001690bc;
  if (iVar9 != 0) {
    *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x954) = *(undefined4 *)(param_1 + 0x30);
    *(float *)(param_1 + 0x950) = *(float *)(param_1 + 0x950) - fVar1;
  }
  fVar11 = DAT_001690c4;
  fVar3 = DAT_001690c0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1004000;
  fVar1 = fVar3;
  if (*(short *)(param_1 + 0x1c) == 1) {
    fVar1 = fVar11;
  }
  pfVar8 = (float *)(param_1 + 0x6ec);
  iVar9 = 6;
  pfVar7 = (float *)(param_1 + 0x6e8);
  uVar4 = VectorSignedToFloat((int)(short)(int)(*(float *)(*(int *)(param_1 + 0x8d0) + 0x34) * fVar1
                                               ),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(*(int *)(param_1 + 0x8d0) + 0x34) = uVar4;
  pfVar6 = (float *)(param_1 + 0x6e4);
  do {
    fVar12 = *pfVar7;
    fVar13 = (float)VectorSignedToFloat((int)(short)(int)(*pfVar8 * fVar1),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat((int)(short)(int)(*pfVar6 * fVar1),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *pfVar8 = fVar13;
    *pfVar6 = fVar11;
    pfVar6 = pfVar6 + 0x16;
    fVar11 = (float)VectorSignedToFloat((int)(short)(int)(fVar12 * fVar1),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *pfVar7 = fVar11;
    iVar9 = iVar9 + -1;
    pfVar7 = pfVar7 + 0x16;
    pfVar8 = pfVar8 + 0x16;
  } while (iVar9 != 0);
  FUN_0037572c(fVar1 * DAT_0016913c,param_1);
  iVar9 = DAT_00169144;
  *(float *)(param_1 + 0x974) = fVar1 * DAT_00169140;
  *(float *)(param_1 + 0x970) = fVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar2 = DAT_00169148;
  *(undefined2 *)(iVar9 + param_1) = *(undefined2 *)(param_1 + 0x36);
  *(float *)(param_1 + 0x97c) = fVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = DAT_00169150;
  if (*(short *)(param_1 + 0x1c) == 1) {
    *(undefined4 *)(param_1 + 0x50) = DAT_0016914c;
  }
  *(undefined4 *)(param_1 + 0x6a0) = uVar2;
  return;
}
