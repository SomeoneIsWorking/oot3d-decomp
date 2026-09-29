// OoT3D decomp @ 00321598  name=FUN_00321598  size=172

void FUN_00321598(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;

  uVar2 = DAT_00321698;
  puVar1 = DAT_00321694;
  if (((DAT_00321694[1] & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_00321694 + 1), puVar4 = DAT_003216a0, uVar3 = DAT_0032169c,
     iVar5 != 0)) {
    *DAT_003216a0 = uVar2;
    puVar4[1] = uVar3;
    puVar4[2] = uVar2;
  }
  puVar6 = (uint *)*puVar1;
  if (((*puVar1 & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_00321694), puVar4 = DAT_003216a4, puVar6 = (uint *)0x0, iVar5 != 0))
  {
    *DAT_003216a4 = uVar2;
    puVar4[1] = uVar2;
    puVar4[2] = uVar2;
    puVar6 = DAT_00321694;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0(puVar6);
}
