// OoT3D decomp @ 004a3344  name=FUN_004a3344  size=368

void FUN_004a3344(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  short local_24 [2];
  float local_20;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  FUN_0034b288(*(undefined4 *)(param_1 + 0x221c),param_2,param_1,*(undefined4 *)(param_1 + 0x29c8));
  FUN_0034b17c(param_1);
  iVar2 = FUN_002c3d18(param_2,param_1,DAT_004a34b4,1);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_00358bf4(param_2,param_1,*(undefined4 *)(param_1 + 0x29c8)), fVar1 = DAT_004a34b8,
     iVar2 == 0)) {
    FUN_0036b3f4(DAT_004a34b8,param_1,&local_20,local_24,param_2);
    if ((local_20 == fVar1) ||
       ((0xc000 < (int)(short)(*(short *)(param_1 + 0xbe) - local_24[0]) + 0x6000U ||
        (*(char *)(param_1 + 0x1a7) == '\x01')))) {
      FUN_002bdd68(param_2,param_1);
    }
    else {
      iVar2 = FUN_00349574(param_1);
      if ((iVar2 != 0) || ((*(uint *)(param_1 + 0x1710) & DAT_004a34bc) != 0)) {
        FUN_0036055c(param_2,param_1,DAT_004a34c0,1);
        FUN_00360190(DAT_004a34c8,fVar1,fVar1,DAT_004a34c4,param_1 + 0x254,param_2,0x3b,0);
      }
    }
    FUN_0034ad70(local_20,param_1,param_1 + 0x221c,(int)local_24[0]);
    FUN_00360a1c(param_1,DAT_004a34cc);
  }
  return;
}
