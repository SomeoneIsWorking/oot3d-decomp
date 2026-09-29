// OoT3D decomp @ 0023fe70  name=FUN_0023fe70  size=632

void FUN_0023fe70(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_20;

  local_20 = *DAT_00240190;
  uVar5 = 0;
  FUN_003510b0(param_1,&local_20);
  *(char *)(param_1 + 0x1c0) = (char)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 8);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  FUN_003532e8(param_1,0);
  iVar4 = DAT_00240194;
  *(undefined2 *)(DAT_00240194 + 4) = 0;
  FUN_00372f38(param_1,param_2,param_1 + 0x1d0,0x1c,param_1 + 0x1d4,0x1a,param_1 + 0x1d8,0x14,
               param_1 + 0x1dc,0x18,param_1 + 0x1e0,0x1b,0,uVar5);
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x1d0);
  }
  else if (sVar1 == 2) {
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x1d8);
  }
  else {
    if (sVar1 == 3) {
      uVar5 = *(undefined4 *)(param_1 + 0x1dc);
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x1d4);
    }
    *(undefined4 *)(param_1 + 0x1cc) = uVar5;
  }
  TorchAnimationModel_0034f94c(param_1 + 0x1e4,param_2,param_1,0xb);
  uVar5 = DAT_00240198;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 3) {
    if ((*(short *)(iVar4 + 2) == 0x100) &&
       ((uint)((int)*(short *)(param_1 + 0xbe) + ((int)DAT_002401a0 >> 1)) <= DAT_002401a0)) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0024019c;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (sVar1 == 0) {
    uVar3 = FUN_00353fd4(param_1,param_2,0x14);
    uVar5 = DAT_002401b4;
    *(undefined2 *)(param_1 + 0x1c2) = 0;
    *(undefined4 *)(iVar4 + 8) = uVar5;
    iVar4 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c0));
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_002401bc;
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_002401b8;
    }
  }
  else if (sVar1 == 1) {
    uVar3 = FUN_00353fd4(param_1,param_2,0x13);
    iVar4 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c0));
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_002401c0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = uVar5;
    }
  }
  else {
    uVar3 = FUN_00353fd4(param_1,param_2,0xe);
    iVar4 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c0));
    uVar2 = DAT_002401c8;
    if (iVar4 == 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
      FUN_0037322c(uVar2,param_1);
      *(undefined4 *)(param_1 + 0x1bc) = DAT_002401cc;
    }
    else {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_002401c4;
      *(undefined4 *)(param_1 + 0x1bc) = uVar5;
    }
  }
  uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  return;
}
