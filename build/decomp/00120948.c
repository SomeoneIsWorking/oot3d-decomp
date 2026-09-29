// OoT3D decomp @ 00120948  name=FUN_00120948  size=348

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00120948(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  uVar5 = DAT_00120aa8;
  uVar4 = DAT_00120aa4;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    FUN_0036fc20(DAT_00120aa8,DAT_00120aa4,param_1 + 0x6c);
  }
  uVar3 = DAT_00120ab4;
  uVar2 = DAT_00120ab0;
  iVar1 = DAT_00120aac;
  if (*(short *)(param_1 + 0x724) == 0) {
    if ('\0' < *(char *)(param_1 + 0xb7)) {
      uVar5 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_00120aac + 8));
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar4,uVar3,uVar5,uVar2,param_1 + 0x1a4,*(undefined4 *)(iVar1 + 8),0);
      *(undefined4 *)(param_1 + 0x708) = DAT_00120ac4;
      *(undefined2 *)(param_1 + 0x724) = 0x1e;
      if (5 < *(short *)(param_1 + 0x1c)) {
        FUN_00375bcc(param_1,DAT_00120acc);
        return;
      }
      FUN_0037547c(DAT_00120ac8,param_1 + 0x28,4,DAT_00375c04);
      return;
    }
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_00120aac + 0x1c));
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar5,uVar3,uVar4,uVar2,param_1 + 0x1a4,*(undefined4 *)(iVar1 + 0x1c),2);
    *(undefined4 *)(param_1 + 0x708) = DAT_00120ab8;
    *(undefined2 *)(param_1 + 0x724) = 0x2d;
    if (*(short *)(param_1 + 0x1c) < 6) {
      FUN_00375bcc(param_1,DAT_00120abc);
    }
    else {
      FUN_00375bcc(param_1,DAT_00120ac0);
    }
    *(undefined2 *)(param_1 + 0x722) = 100;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  return;
}
