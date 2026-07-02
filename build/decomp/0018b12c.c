// OoT3D decomp @ 0018b12c  name=FUN_0018b12c  size=212

void FUN_0018b12c(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x960));
  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x97c));
  puVar3 = DAT_0018b208;
  iVar2 = DAT_0018b204;
  puVar1 = DAT_0018b200;
  iVar6 = 0;
  do {
    if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0018b200), iVar4 != 0)) {
      FUN_0036788c(DAT_0018b20c);
    }
    iVar4 = param_1 + iVar6 * 4;
    FUN_00348904(*(undefined4 *)(iVar2 + 0x47c),*(undefined4 *)(iVar4 + 0x918));
    *(undefined4 *)(iVar4 + 0x918) = 0;
    if (*(int *)(iVar4 + 0x910) != 0) {
      uVar5 = FUN_003488e4();
      (**(code **)(*(int *)*puVar3 + 0x10))((int *)*puVar3,uVar5);
    }
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar4 + 0x910) = 0;
  } while (iVar6 < 2);
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4);
}

