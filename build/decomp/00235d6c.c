// OoT3D decomp @ 00235d6c  name=FUN_00235d6c  size=104

void FUN_00235d6c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;

  uVar5 = *(uint *)(param_1 + 8);
  if (((*(uint *)(param_1 + 8) & 1) == 0) &&
     (iVar4 = FUN_003679b4(uRam00235e68), puVar3 = puRam00235e74, uVar2 = uRam00235e70,
     uVar1 = uRam00235e6c, uVar5 = 0, iVar4 != 0)) {
    *puRam00235e74 = uRam00235e6c;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
    uVar5 = uRam00235e68;
  }
  if (param_2 == 0x12) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0(uVar5);
  }
  return;
}
