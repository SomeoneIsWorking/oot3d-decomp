// OoT3D decomp @ 003d6b20  name=FUN_003d6b20  size=340

void FUN_003d6b20(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;

  puVar3 = DAT_003d6d4c;
  uVar2 = DAT_003d6d48;
  iVar5 = DAT_003d6d44;
  if (((*(uint *)(DAT_003d6d44 + 0xc) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_003d6d44 + 0xc), iVar4 != 0)) {
    *puVar3 = uVar2;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  if (((*(uint *)(iVar5 + 8) & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_003d6d50), puVar3 = DAT_003d6d54, iVar5 != 0)) {
    *DAT_003d6d54 = uVar2;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  FUN_003731e0(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x140) != 0) {
    if ((*(uint *)(param_1 + 4) & 0x8000) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
    FUN_00374444(param_2,param_1,param_1 + 0x28,0x50);
  }
  if ((*(short *)(param_1 + 0x66a) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x66a) + -1, *(short *)(param_1 + 0x66a) = sVar1, sVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  FUN_00374428(param_1);
  if (*(short *)(param_1 + 0x66a) == 0x15) {
    FUN_00375c44(param_2,param_1 + 0x28,0x28,DAT_003d6d6c);
  }
  return;
}
