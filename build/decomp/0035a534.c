// OoT3D decomp @ 0035a534  name=FUN_0035a534  size=212

void FUN_0035a534(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;

  uVar2 = DAT_0035a6c0;
  puVar1 = DAT_0035a6bc;
  if (((DAT_0035a6bc[1] & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_0035a6bc + 1), puVar4 = DAT_0035a6c8, uVar3 = DAT_0035a6c4,
     iVar5 != 0)) {
    *DAT_0035a6c8 = uVar2;
    puVar4[1] = uVar3;
    puVar4[2] = uVar2;
  }
  if (((*puVar1 & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_0035a6bc), puVar4 = DAT_0035a6d0, uVar3 = DAT_0035a6cc, iVar5 != 0))
  {
    *DAT_0035a6d0 = uVar2;
    puVar4[1] = uVar3;
    puVar4[2] = uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
