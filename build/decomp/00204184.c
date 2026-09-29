// OoT3D decomp @ 00204184  name=FUN_00204184  size=368

void FUN_00204184(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  short sVar4;
  int iVar5;

  FUN_003731e0(param_1 + 0x1a4);
  iVar5 = DAT_002042fc;
  uVar2 = DAT_002042f8;
  uVar1 = DAT_002042f4;
  FUN_003705a0(DAT_002042f8,DAT_002042f4,DAT_002042fc + 8);
  FUN_003705a0(uVar2,uVar1,iVar5 + 0x14);
  FUN_003705a0(DAT_00204300,uVar1,iVar5);
  FUN_003705a0(DAT_00204304,uVar1,iVar5 + 0xc);
  if ((*(uint *)(param_1 + 4) & 0x2000) == 0) {
    if ((*(short *)(param_1 + 0x234) == 0) ||
       (sVar4 = *(short *)(param_1 + 0x234) + -1, *(short *)(param_1 + 0x234) = sVar4, sVar4 == 0))
    {
      uVar1 = DAT_0020430c;
      piVar3 = DAT_00204308;
      iVar5 = *DAT_00204308;
      FUN_00374a58(DAT_0020430c,iVar5 + 0x1a4,DAT_00204308[*(short *)(iVar5 + 0x1c) + -4]);
      uVar2 = DAT_00204310;
      *(undefined1 *)(iVar5 + 0x231) = 0;
      *(undefined4 *)(iVar5 + 0x22c) = uVar2;
      iVar5 = piVar3[1];
      FUN_00374a58(uVar1,iVar5 + 0x1a4,piVar3[*(short *)(iVar5 + 0x1c) + -4]);
      *(undefined1 *)(iVar5 + 0x231) = 0;
      uVar1 = DAT_00204314;
      *(undefined4 *)(iVar5 + 0x22c) = uVar2;
      FUN_00374a58(uVar1,param_1 + 0x1a4,0x17);
      uVar1 = DAT_00204318;
      *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) & 0xfe;
      *(undefined4 *)(param_1 + 0x129c) = 0xffcfffff;
      *(byte *)(*(int *)(param_1 + 0xf08) + 0x336) =
           *(byte *)(*(int *)(param_1 + 0xf08) + 0x336) & 0xfa;
      *(byte *)(*(int *)(param_1 + 0xf08) + 0x16) = *(byte *)(*(int *)(param_1 + 0xf08) + 0x16) | 1;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(undefined1 *)(param_1 + 0x230) = 1;
      *(undefined4 *)(param_1 + 0x22c) = DAT_0020431c;
      return;
    }
  }
  else {
    sVar4 = *(short *)(param_1 + 0x234) + 3;
    *(short *)(param_1 + 0x234) = sVar4;
    if (0x71 < sVar4) {
      sVar4 = 0x71;
    }
    *(short *)(param_1 + 0x234) = sVar4;
  }
  return;
}
