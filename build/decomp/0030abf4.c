// OoT3D decomp @ 0030abf4  name=FUN_0030abf4  size=204

undefined4 FUN_0030abf4(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_24 [3];
  uint local_18 [2];
  uint local_10;

  iVar2 = param_1[1];
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar1 = param_2 >> 0x18;
    uVar3 = 0;
    if (uVar1 == 1) {
      FUN_00488374(iVar2,param_2,local_24);
    }
    else if (uVar1 == 3) {
      local_10 = 0xffffffff;
      FUN_0048be4c(iVar2,param_2,&local_10);
      local_24[0] = local_10;
    }
    else if (uVar1 == 5) {
      local_18[0] = 0xffffffff;
      local_10 = local_10 & 0xffffff00;
      FUN_00495920(param_1[1],param_2,local_18);
      local_24[0] = local_18[0];
    }
    else {
      if (uVar1 != 6) {
        return 0;
      }
      local_10 = 0xffffffff;
      FUN_0040e110(iVar2,param_2,&local_10);
      local_24[0] = local_10;
    }
    if (local_24[0] != 0xffffffff) {
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    }
  }
  return uVar3;
}
