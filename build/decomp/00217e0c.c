// OoT3D decomp @ 00217e0c  name=FUN_00217e0c  size=192

void FUN_00217e0c(int param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;

  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar3 != 6) || (iVar4 = FUN_00346964(param_2), iVar3 = DAT_00217ecc, iVar4 == 0)) {
    return;
  }
  *(ushort *)(DAT_00217ecc + 10) = *(ushort *)(DAT_00217ecc + 10) | 0x40;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 0) {
    if ((*(ushort *)(iVar3 + 0xe) & 0x200) != 0) {
      *(undefined1 *)(param_1 + 0x123) = 0x41;
      goto LAB_00217e98;
    }
    if ((*(ushort *)(iVar3 + 10) & 0x40) != 0) {
      uVar2 = 0x40;
      goto LAB_00217e94;
    }
  }
  else if (sVar1 != 1 && sVar1 != 2) {
    uVar2 = 0x36;
LAB_00217e94:
    *(undefined1 *)(param_1 + 0x123) = uVar2;
    goto LAB_00217e98;
  }
  *(undefined1 *)(param_1 + 0x123) = 0x3f;
LAB_00217e98:
  *(short *)(DAT_00217ed4 + param_1) = (short)DAT_00217ed0;
  FUN_003686a8(param_1,9);
  FUN_003729b8(param_1,10);
  return;
}
