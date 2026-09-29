// OoT3D decomp @ 0039eb24  name=FUN_0039eb24  size=332

void FUN_0039eb24(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;

  uVar4 = DAT_0039ee68;
  uVar3 = DAT_0039ee64;
  uVar2 = DAT_0039ee60;
  puVar1 = DAT_0039ee5c;
  if (((DAT_0039ee5c[1] & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0039ee5c + 1), puVar5 = DAT_0039ee6c, iVar6 != 0)) {
    *DAT_0039ee6c = uVar2;
    puVar5[1] = uVar3;
    puVar5[2] = uVar4;
  }
  if ((*(byte *)(param_1 + 0x1cd) & 2) != 0) {
    puVar7 = (uint *)*puVar1;
    if (((*puVar1 & 1) == 0) &&
       (iVar6 = FUN_003679b4(DAT_0039ee5c), puVar5 = DAT_0039ee70, puVar7 = (uint *)0x0, iVar6 != 0)
       ) {
      *DAT_0039ee70 = uVar2;
      puVar5[1] = uVar3;
      puVar5[2] = uVar4;
      puVar7 = DAT_0039ee5c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0(puVar7);
  }
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1bc);
  return;
}
