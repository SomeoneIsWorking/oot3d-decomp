// OoT3D decomp @ 002efea0  name=FUN_002efea0  size=308

void FUN_002efea0(undefined4 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = DAT_002effec;
  fVar2 = DAT_002effe8;
  FUN_002f8d74(*(undefined4 *)(DAT_002effec + 0x14),param_1,param_2);
  if (param_2 == 0xff) {
    fVar2 = DAT_002efff0;
  }
  switch(param_1) {
  case 0:
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),param_1,7,0xc0,(int)fVar2,(int)fVar2);
    break;
  case 1:
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),param_1,DAT_002efff4,7,(int)fVar2,(int)fVar2);
    return;
  case 2:
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),param_1,DAT_002efff4,0xbf,(int)fVar2,(int)fVar2);
    return;
  case 3:
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),param_1,0x114,0x3e,(int)fVar2,(int)fVar2);
    return;
  case 4:
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),param_1,0x103,0x68,(int)fVar2,(int)fVar2);
    return;
  }
  return;
}

