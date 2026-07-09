// OoT3D decomp @ 002c150c  name=FUN_002c150c  size=356

void FUN_002c150c(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  bool bVar6;
  
  puVar4 = (uint *)*puRam002c1670;
  if (param_2 == 0) {
    return;
  }
  uVar3 = param_1 & 0xffff0000;
  if ((param_1 & 0xffff) == 0x8892) {
    iVar5 = *(int *)(*piRam002c1674 + 0x808);
  }
  else {
    if ((param_1 & 0xffff) != 0x8893) {
      return;
    }
    iVar5 = *(int *)(*piRam002c1674 + 0x80c);
  }
  if ((param_1 & 0xff000000) == 0) {
    uVar3 = uVar3 | 0x1000000;
  }
  piVar2 = *(int **)(iVar5 + 8);
  if ((uVar3 & 0xff0000) == 0) {
    uVar3 = uVar3 | 0x10000;
  }
  if (*piVar2 != 0) {
    uVar1 = piVar2[3];
    bVar6 = uVar1 == param_2;
    if (bVar6) {
      uVar1 = piVar2[6];
    }
    if ((bVar6 && uVar1 == uVar3) || (FUN_002cce18(iVar5), *piVar2 != 0)) goto LAB_002c15c4;
  }
  piVar2[4] = param_4 & 0xffff;
  piVar2[6] = uVar3;
  piVar2[3] = param_2;
  iVar5 = FUN_0044d778(iVar5);
  if (iVar5 == 0) {
    return;
  }
LAB_002c15c4:
  if (param_3 != 0) {
    piVar2[2] = param_3;
    if ((uVar3 == 0x1010000 || uVar3 == 0x1020000) || uVar3 == 0x1030000) {
      FUN_0034338c(piVar2[1],param_3,piVar2[3]);
    }
    else if (uVar3 == 0x2010000) {
      *piVar2 = param_3;
    }
    iVar5 = uVar3 + 0xfefe0000;
    if (iVar5 == 0 || iVar5 == 0x10000) {
      FUN_002df380(*piVar2,piVar2[1],piVar2[3]);
    }
    else {
      bVar6 = iVar5 != 0x1000000;
      if (bVar6) {
        iVar5 = uVar3 + 0xfdfe0000;
      }
      if (!bVar6 || iVar5 == 0x10000) {
        FUN_002df380(*piVar2,piVar2[2],piVar2[3]);
      }
    }
    if (uVar3 == 0x1010000 || uVar3 == 0x2010000) {
      FUN_00453f44(*piVar2,piVar2[3]);
    }
  }
  *puVar4 = *puVar4 | 2;
  return;
}

