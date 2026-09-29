// OoT3D decomp @ 00247af0  name=FUN_00247af0  size=316

void FUN_00247af0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  FUN_00372224(auStack_44,param_1 + 0x148);
  uVar1 = DAT_00247c34;
  uVar2 = (uint)*(short *)(param_1 + 0x1a8);
  if ((int)uVar2 < 0x28) {
    if ((int)uVar2 < 10) {
      uVar2 = uVar2 & 1;
      iVar3 = 1;
    }
    else {
      iVar3 = (int)((ulonglong)((longlong)DAT_00247c2c * (longlong)(int)uVar2) >> 0x20);
      uVar2 = uVar2 + ((iVar3 >> 2) - (iVar3 >> 0x1f)) * -10;
      iVar3 = 5;
    }
  }
  else {
    iVar3 = (int)((ulonglong)((longlong)DAT_00247c2c * (longlong)(int)uVar2) >> 0x20);
    uVar2 = uVar2 + ((iVar3 >> 3) - (iVar3 >> 0x1f)) * -0x14;
    iVar3 = 10;
  }
  if (iVar3 < (int)uVar2) {
    uVar2 = iVar3 * 2 - uVar2;
  }
  fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  local_50 = *(float *)(param_1 + 0x1d4) * DAT_00247c30;
  local_4c = DAT_00247c34;
  local_48 = DAT_00247c34;
  FUN_00372070(auStack_44,auStack_44,&local_50);
  if (*(int *)(param_1 + 0x250) != 0) {
    FUN_003695cc((fVar4 / fVar5) * DAT_00247c38 * DAT_00247c3c,uVar1,uVar1,
                 (DAT_00247c38 - (fVar4 / fVar5) * DAT_00247c38) * DAT_00247c3c,
                 *(int *)(param_1 + 0x250),1,4,0);
    *(undefined1 *)(*(int *)(param_1 + 0x250) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x250),auStack_44);
    FUN_00372170(*(undefined4 *)(param_1 + 0x250),0);
  }
  return;
}
