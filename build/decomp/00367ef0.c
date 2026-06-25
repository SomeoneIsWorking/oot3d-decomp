// OoT3D decomp @ 00367ef0  name=FUN_00367ef0  size=48

float FUN_00367ef0(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_00367f20;
  if ((*(uint *)(param_1 + 0x1710) & 0x800000) != 0) {
    fVar1 = DAT_00367f24;
  }
  fVar2 = DAT_00367f2c;
  if (*(int *)(DAT_00367f28 + 4) == 0) {
    fVar2 = DAT_00367f30;
  }
  return fVar1 + fVar2;
}

