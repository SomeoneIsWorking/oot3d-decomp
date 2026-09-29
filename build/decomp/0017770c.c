// OoT3D decomp @ 0017770c  name=FUN_0017770c  size=196

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0017770c(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000);
  if (DAT_001777d0 <= *(int *)(param_1 + 100)) {
    FUN_0034c128(param_2,param_1 + 0xf04);
    FUN_0034c128(param_2,param_1 + 0xef8);
  }
  iVar3 = FUN_00370734(param_1 + 0x1e0);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x90);
  }
  if (iVar3 == 0 || (uVar1 & 3) == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
  uVar2 = DAT_001777d4;
  *(undefined4 *)(param_1 + 100) = DAT_001777d4;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  iVar3 = FUN_00369608(param_2,param_1);
  if (iVar3 == 0) {
    FUN_0034c3e4(param_1 + 0x1e0,DAT_00364b08);
    uVar2 = DAT_00364b0c;
    *(byte *)(param_1 + 0xcf8) = *(byte *)(param_1 + 0xcf8) & 0xfb;
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    FUN_0037043c(uVar2,param_1 + 0x1e0);
    iVar3 = DAT_00364b14;
    uVar2 = DAT_00364b10;
    *(undefined4 *)(param_1 + 0xcb8) = 8;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined2 *)(iVar3 + param_1) = 0;
    *(undefined4 *)(param_1 + 0xccc) = 0xb;
    *(undefined4 *)(param_1 + 0xcc0) = DAT_00364b18;
    return;
  }
  FUN_00362a4c(DAT_00364a0c,param_1 + 0x1e0,DAT_00364a10);
  *(undefined4 *)(param_1 + 0xcb8) = 6;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
