// OoT3D decomp @ 003043c0  name=FUN_003043c0  size=120

undefined4 FUN_003043c0(uint *param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = false;
  iVar3 = 0;
  if (param_3 != 0xffffffff) {
    uVar2 = 0;
    iVar4 = param_3 + 1;
    do {
      if (((*param_1 & 1 << (uVar2 & 0xff)) != 0) && (iVar3 = iVar3 + 1, uVar2 == param_3)) {
        bVar1 = true;
      }
      iVar4 = iVar4 + -1;
      uVar2 = uVar2 + 1;
    } while (iVar4 != 0);
    if (bVar1) goto LAB_00304410;
  }
  iVar3 = 0;
LAB_00304410:
  if (iVar3 == 0) {
    return 0;
  }
  *param_2 = param_1[iVar3];
  return 1;
}

