// OoT3D decomp @ 0031ca6c  name=FUN_0031ca6c  size=184

void FUN_0031ca6c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;

  piVar1 = piRam0031cb24;
  iVar2 = *piRam0031cb24;
  if (iVar2 != 0) {
    if (param_1 == 0) {
      if (iVar2 == param_2) {
        *piRam0031cb24 = 0;
        goto LAB_0031caac;
      }
      uVar3 = *(uint *)(iVar2 + 4) & 0xfffffffe;
    }
    else {
      uVar3 = *(uint *)(iVar2 + 4) | 1;
    }
    *(uint *)(iVar2 + 4) = uVar3;
  }
LAB_0031caac:
  iVar2 = piVar1[1];
  if (iVar2 != 0) {
    if (param_1 == 0) {
      if (iVar2 == param_2) {
        piVar1[1] = 0;
        goto LAB_0031cae0;
      }
      uVar3 = *(uint *)(iVar2 + 4) & 0xfffffffe;
    }
    else {
      uVar3 = *(uint *)(iVar2 + 4) | 1;
    }
    *(uint *)(iVar2 + 4) = uVar3;
  }
LAB_0031cae0:
  iVar2 = piVar1[2];
  if (iVar2 == 0) {
    return;
  }
  if (param_1 == 0) {
    if (iVar2 == param_2) {
      piVar1[2] = 0;
      return;
    }
    uVar3 = *(uint *)(iVar2 + 4) & 0xfffffffe;
  }
  else {
    uVar3 = *(uint *)(iVar2 + 4) | 1;
  }
  *(uint *)(iVar2 + 4) = uVar3;
  return;
}
