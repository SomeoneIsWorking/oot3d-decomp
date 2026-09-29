// OoT3D decomp @ 00315438  name=FUN_00315438  size=164

void FUN_00315438(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  if (((*DAT_00315590 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00315590), puVar3 = DAT_0031559c, uVar2 = DAT_00315598,
     uVar1 = DAT_00315594, iVar4 != 0)) {
    *DAT_0031559c = DAT_00315594;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
  }
  FUN_00375c44(param_2,param_1 + 0x28,0x1e,DAT_003155a0);
  FUN_003738a8(DAT_003155a4);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
