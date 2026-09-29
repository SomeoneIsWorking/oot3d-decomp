// OoT3D decomp @ 00295038  name=FUN_00295038  size=228

void FUN_00295038(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;

  fVar1 = DAT_00295124;
  iVar2 = *(int *)(DAT_0029511c + param_2);
  uVar3 = *(undefined4 *)(iVar2 + 0x2c);
  uVar4 = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(param_1 + 0xcfc) = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(param_1 + 0xd00) = uVar3;
  *(undefined4 *)(param_1 + 0xd04) = uVar4;
  iVar2 = *DAT_00295120;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar2 + 0x1474),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xcf8) = fVar5 - fVar1;
  FUN_0034c664(param_1,param_1 + 0xce4,(int)(short)(*(short *)(iVar2 + 0x1476) + 0xc),4);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  uVar3 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_00295128;
  FUN_00376340(DAT_00295134,DAT_00295130,DAT_0029512c,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar3;
  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar2 == 2) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff6;
    *(undefined4 *)(param_1 + 0xbbc) = 0x2c;
  }
  return;
}
