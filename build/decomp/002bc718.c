// OoT3D decomp @ 002bc718  name=FUN_002bc718  size=64

undefined2 FUN_002bc718(float param_1,float param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = *DAT_002bc75c;
  if ((param_2 != DAT_002bc758) &&
     (iVar2 = (int)(DAT_002bc764 + (param_1 / param_2) * DAT_002bc760), iVar2 < 0x401)) {
    uVar1 = DAT_002bc75c[iVar2];
  }
  return uVar1;
}

