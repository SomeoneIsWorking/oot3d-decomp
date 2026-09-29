// OoT3D decomp @ 00381f60  name=FUN_00381f60  size=188

void FUN_00381f60(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  uint in_fpscr;
  undefined8 unaff_d8;
  undefined1 auStack_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;

  uVar4 = DAT_00382024;
  local_18 = DAT_00382020;
  uVar1 = DAT_0038201c;
  uStack_14 = (undefined4)unaff_d8;
  uStack_10 = (undefined4)((ulonglong)unaff_d8 >> 0x20);
  iVar3 = *(int *)(param_2 + 0x284);
  bVar5 = iVar3 == 0x199 || iVar3 == 0x19a;
  if (iVar3 != 0x199 && iVar3 != 0x19a) {
    bVar5 = iVar3 == 0x19b;
  }
  if (bVar5) {
    *(short *)(param_2 + 0xbe) = *(short *)(param_2 + 0xbe) + -0x8000;
    *(short *)(param_2 + 0x4a) = *(short *)(param_2 + 0x4a) + -0x8000;
    local_20 = local_18;
    local_1c = uVar4;
    FUN_003625f8(DAT_00382028,auStack_50,&local_20);
    FUN_0036c174(*(int *)(param_2 + 0x2cc) + 0x68,auStack_50,*(int *)(param_2 + 0x2cc) + 0x68);
    FUN_0036c174(*(int *)(param_2 + 0x2cc) + 0x1d4,auStack_50,*(int *)(param_2 + 0x2cc) + 0x1d4);
  }
  local_18 = uStack_14;
  uStack_14 = uStack_10;
  FUN_0036055c(param_1,param_2,DAT_0031e090,1);
  if (((*(uint *)(DAT_0031e094 + param_2) & 0x200) == 0) &&
     (((*(char *)(DAT_0031e09c + param_2) != '\x01' || (*DAT_0031e0a0 < 'Q')) ||
      ((*(uint *)(DAT_0031e094 + param_2) & 0x400) != 0)))) {
    uVar4 = *(undefined4 *)(DAT_0031e098 + (uint)*(byte *)(param_2 + 0x1b3) * 4 + 0xa8);
  }
  else {
    uVar4 = *(undefined4 *)(DAT_0031e098 + (uint)*(byte *)(param_2 + 0x1b3) * 4 + 0xc0);
  }
  uVar2 = FUN_003603c0(param_2 + 0x254,uVar4);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00360190(DAT_0031e0a8,DAT_0031e0a4,uVar2,uVar1,param_2 + 0x254,param_1,uVar4,2);
  *(undefined2 *)(DAT_0031e0ac + param_2) = 1;
  return;
}
