// OoT3D decomp @ 00355f54  name=FUN_00355f54  size=88

void FUN_00355f54(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  FUN_003655d0(0,param_1);
  FUN_003655d0(1,param_1);
  FUN_003655d0(3,param_1);
  FUN_00355fac(0,3,0x7f);
  puVar2 = DAT_00356014;
  iVar1 = DAT_00356010;
  fVar4 = (float)VectorUnsignedToFloat(0x7f,(byte)(in_fpscr >> 0x15) & 3);
  pfVar3 = (float *)(DAT_00356010 + 0x10);
  fVar5 = (float)VectorSignedToFloat(1,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * DAT_0035600c * fVar4 * DAT_0035600c;
  *pfVar3 = fVar4;
  *(float *)(iVar1 + 0x14) = fVar4;
  *(float *)(iVar1 + 0x18) = (fVar4 - *pfVar3) / fVar5;
  *(undefined4 *)(iVar1 + 0x1c) = 1;
  *puVar2 = 1;
  return;
}

