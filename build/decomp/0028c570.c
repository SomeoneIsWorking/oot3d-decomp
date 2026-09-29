// OoT3D decomp @ 0028c570  name=FUN_0028c570  size=312

void FUN_0028c570(int param_1,int param_2)

{
  undefined2 uVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;

  psVar2 = DAT_0028c6a8;
  if (*DAT_0028c6a8 == 0) {
    *(undefined4 *)(param_1 + 0x54) = DAT_0028c6ac;
    uVar5 = DAT_0028c6b0;
    *(undefined4 *)(param_1 + 0x5c) = DAT_0028c6b0;
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(undefined4 *)(param_1 + 0x28) = DAT_0028c6b4;
    *(undefined4 *)(param_1 + 0x30) = DAT_0028c6b8;
    iVar4 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    *(int *)(param_1 + 0x1ac) = iVar4;
    uVar5 = DAT_0028c6c0;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = DAT_0028c6c4;
      iVar4 = *(int *)(*(int *)(param_2 + 0xa98) + 0x28);
      *(undefined2 *)(iVar4 + 0x22) = 0xb8;
      *(undefined2 *)(iVar4 + 0x32) = 0xb8;
      *(undefined2 *)(iVar4 + 0x42) = 0xb8;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = DAT_0028c6bc;
      iVar4 = *(int *)(*(int *)(param_2 + 0xa98) + 0x28);
      uVar1 = (undefined2)uVar5;
      *(undefined2 *)(iVar4 + 0x22) = uVar1;
      *(undefined2 *)(iVar4 + 0x32) = uVar1;
      *(undefined2 *)(iVar4 + 0x42) = uVar1;
    }
    cVar3 = FUN_00363c10(param_2 + 0x3a58,0x73);
    *(char *)(param_1 + 0x1b4) = cVar3;
    if (-1 < cVar3) {
      uVar5 = FUN_00372f38(param_1,param_2,param_1 + 0x1b8,5,0);
      uVar5 = FUN_00372f0c(uVar5,0);
      FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1b8) + 0xc),uVar5);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1b8) + 0xc) + 0x10) = 1;
      *(undefined4 *)(param_1 + 0x1a4) = DAT_0028c6c8;
      *psVar2 = 1;
      *(undefined2 *)(param_1 + 0x1b0) = 1;
      *(undefined1 *)(param_1 + 3) = 0xff;
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}
