// OoT3D decomp @ 001775e0  name=FUN_001775e0  size=280

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001775e0(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000);
  if (DAT_001776f8 <= *(int *)(param_1 + 100)) {
    FUN_0034c128(param_2,param_1 + 0xdd8);
    FUN_0034c128(param_2,param_1 + 0xdcc);
  }
  iVar4 = FUN_003731e0(param_1 + 0x1e0);
  uVar2 = DAT_001776fc;
  uVar1 = 0;
  if (iVar4 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x90);
  }
  if (iVar4 != 0 && (uVar1 & 3) != 0) {
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    iVar4 = FUN_00369608(param_2,param_1);
    if (iVar4 != 0) {
      FUN_00370350(DAT_0035adec,param_1 + 0x1e0,10);
      *(undefined4 *)(param_1 + 0xbe8) = 5;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    FUN_00373d40(param_1 + 0x1e0,0);
    uVar3 = DAT_00177704;
    *(byte *)(param_1 + 0xc84) = *(byte *)(param_1 + 0xc84) & 0xfb;
    *(undefined4 *)(param_1 + 0xbe8) = 7;
    iVar4 = DAT_00177700;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined2 *)(iVar4 + param_1) = 0;
    FUN_003ff758(param_1 + 0x28,uVar3);
    *(undefined4 *)(param_1 + 0xbf0) = DAT_00177708;
  }
  return;
}
