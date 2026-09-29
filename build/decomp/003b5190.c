// OoT3D decomp @ 003b5190  name=FUN_003b5190  size=156

/* WARNING: Removing unreachable block (ram,0x003b5258) */

void FUN_003b5190(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  if ((*(short *)(param_1 + 0x282) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x282) + -1, *(short *)(param_1 + 0x282) = sVar1, sVar1 != 0)) {
    return;
  }
  uVar3 = DAT_003b5278;
  uVar2 = DAT_003b5274;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  FUN_0037572c(uVar3,param_1);
  *(undefined4 *)(param_1 + 0xc4) = DAT_003b527c;
  *(undefined4 *)(param_1 + 0x288) = DAT_003b5280;
  *(undefined4 *)(param_1 + 0x28c) = DAT_003b5284;
  *(undefined4 *)(param_1 + 0x298) = uVar2;
  *(undefined4 *)(param_1 + 0x29c) = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
