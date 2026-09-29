// OoT3D decomp @ 003d53a0  name=FUN_003d53a0  size=264

void FUN_003d53a0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  puVar2 = DAT_003d555c;
  uVar1 = DAT_003d5558;
  iVar5 = DAT_003d5554;
  if (((*(uint *)(DAT_003d5554 + 0xc) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_003d5554 + 0xc), iVar4 != 0)) {
    *puVar2 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if (((*(uint *)(iVar5 + 8) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_003d5560), puVar2 = DAT_003d5564, iVar5 != 0)) {
    *DAT_003d5564 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  uVar3 = DAT_003d556c;
  uVar1 = DAT_003d5568;
  if (*(short *)(param_1 + 0x6a6) != 0) {
    *(short *)(param_1 + 0x6a6) = *(short *)(param_1 + 0x6a6) + -1;
  }
  FUN_003738a8(uVar1);
  FUN_003738a8(uVar3);
  FUN_003738a8(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
