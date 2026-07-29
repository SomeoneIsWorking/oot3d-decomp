// OoT3D decomp @ 002b7cf4  name=FUN_002b7cf4  size=116

void FUN_002b7cf4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_28 = *puRam002b7d68;
  uStack_24 = puRam002b7d68[1];
  uStack_20 = puRam002b7d68[2];
  uStack_1c = puRam002b7d68[3];
  uStack_18 = puRam002b7d68[4];
  uStack_14 = puRam002b7d68[5];
  uStack_48 = *puRam002b7d6c;
  uStack_44 = puRam002b7d6c[1];
  uStack_40 = puRam002b7d6c[2];
  uStack_3c = puRam002b7d6c[3];
  uStack_38 = puRam002b7d6c[4];
  uStack_34 = puRam002b7d6c[5];
  uStack_30 = puRam002b7d6c[6];
  uStack_2c = puRam002b7d6c[7];
  if (*(int *)(iRam002b7d70 + 4) != 0) {
    func_0x002b7714(param_1,param_2,&uStack_28,6);
    return;
  }
  func_0x002b7714(param_1,param_2,&uStack_48,8);
  return;
}

