// OoT3D decomp @ 0034fea8  name=FUN_0034fea8  size=128

void FUN_0034fea8(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;

  if (((param_2 & 0xff) < 0x13) &&
     (param_3 = param_3 + (param_2 & 0xff) * 0x80, *(int *)(DAT_0034ff28 + param_3) != 0)) {
    param_3 = param_3 + 0x3a5c;
  }
  else {
    param_3 = 0;
  }
  uVar1 = ObjectBankArchive_00372c90(param_3 + 0x10,param_4);
  FUN_00348a64(param_1[1],0,uVar1,param_5,param_6,param_7,param_8);
  *param_1 = uVar1;
  return;
}
