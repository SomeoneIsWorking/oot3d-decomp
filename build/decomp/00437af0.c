// OoT3D decomp @ 00437af0  name=FUN_00437af0  size=168

void FUN_00437af0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;

  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((((~uVar2 & 0xc) == 0) || (((uVar2 & 4) != 0 && ((uVar1 & 8) == 0)))) ||
     (((uVar2 & 8) != 0 && ((uVar1 & 4) == 0)))) {
    uVar2 = uVar2 | 8;
  }
  else {
    uVar2 = uVar2 & 0xfffffff7;
  }
  param_1[1] = uVar2;
  uVar2 = param_1[2];
  if ((((~uVar2 & 0xc) == 0) || (((uVar2 & 4) != 0 && ((uVar1 & 8) == 0)))) ||
     (((uVar2 & 8) != 0 && ((uVar1 & 4) == 0)))) {
    uVar2 = uVar2 | 8;
  }
  else {
    uVar2 = uVar2 & 0xfffffff7;
  }
  bVar3 = (uVar1 & 4) != 0;
  if (bVar3) {
    uVar1 = uVar1 & 0xfffffffb | 8;
  }
  param_1[2] = uVar2;
  if (bVar3) {
    *param_1 = uVar1;
  }
  param_1[1] = param_1[1] & 0xfffffffb;
  param_1[2] = param_1[2] & 0xfffffffb;
  return;
}
