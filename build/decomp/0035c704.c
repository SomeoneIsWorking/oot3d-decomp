// OoT3D decomp @ 0035c704  name=FUN_0035c704  size=644

void FUN_0035c704(int param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_80 [48];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;

  iVar5 = DAT_0035c990;
  fVar3 = DAT_0035c988;
  local_44 = DAT_0035c988;
  local_40 = DAT_0035c988;
  local_3c = DAT_0035c98c;
  iVar6 = *(int *)(param_1 + 0x20ac);
  if (*(short *)(DAT_0035c990 + 0x1e) == 3) {
    fVar8 = param_2[1];
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_1 + 0xa98) + 0x28) +
                                                       2),(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar10) << 0x1f | (uint)(fVar8 == fVar10) << 0x1e;
    in_fpscr = uVar1 | (uint)(NAN(fVar8) || NAN(fVar10)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    fVar8 = DAT_0035c988;
    if ((!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) ||
       (*(char *)(DAT_0035c990 + 5) != '\0' && param_4 != 0)) goto LAB_0035c7bc;
  }
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_1 + 0xa98) + 0x28) + 2
                                                     ),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = DAT_0035c994;
  if (param_2[1] < fVar10) {
    fVar8 = DAT_0035c998;
  }
LAB_0035c7bc:
  fVar13 = *param_3 - *param_2;
  fVar10 = param_3[1];
  fVar11 = param_2[1];
  fVar12 = param_3[2] - param_2[2];
  uVar9 = FUN_003675f8(fVar12,fVar13);
  fVar8 = (float)FUN_003675f8(SQRT(fVar13 * fVar13 + fVar12 * fVar12),(fVar10 - fVar11) + fVar8);
  FUN_003735e8(uVar9,auStack_80,0);
  FUN_00369014(-fVar8,auStack_80,1);
  FUN_003735ac(&local_50,auStack_80,&local_44);
  *param_3 = *param_2 + local_50;
  param_3[1] = param_2[1] + local_4c;
  param_3[2] = param_2[2] + local_48;
  FUN_003713fc(*param_2,param_2[1],param_2[2],auStack_80,0);
  puVar4 = (undefined4 *)(DAT_0035c99c + param_4 * 4);
  bVar7 = false;
  if (*(float *)(iVar6 + 0x6c) == fVar3) {
    bVar7 = *(float *)(iVar5 + 0xe8) == fVar3;
  }
  if (bVar7) {
    FUN_00373500(uVar9,DAT_0035c9a4,DAT_0035c9a0,puVar4);
  }
  else {
    *puVar4 = uVar9;
  }
  FUN_003735e8(*puVar4,auStack_80,1);
  FUN_00369014(-fVar8,auStack_80,1);
  FUN_00371348(DAT_0035c9ac,DAT_0035c9ac,DAT_0035c9a8,auStack_80,1);
  FUN_003735e8(DAT_0035c9b0,auStack_80,1);
  iVar5 = param_5 + param_4 * 8;
  *(undefined1 *)(*(int *)(iVar5 + 0x48c) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(iVar5 + 0x48c),auStack_80);
  FUN_00372170(*(undefined4 *)(iVar5 + 0x48c),0);
  FUN_00371234(DAT_0035c9b4,auStack_80,1);
  *(undefined1 *)(*(int *)(iVar5 + 0x490) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(iVar5 + 0x490),auStack_80);
  FUN_00372170(*(undefined4 *)(iVar5 + 0x490),0);
  if (param_4 == 1) {
    FUN_00315744(param_1,param_5,auStack_80);
  }
  return;
}
