// OoT3D decomp @ 002d322c  name=FUN_002d322c  size=416

undefined4
FUN_002d322c(int *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,int param_6
            )

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;

  uVar1 = FUN_0048be78(param_1[1]);
  if (((param_4 & 2) != 0) && (iVar2 = FUN_0030a884(param_1,uVar1,param_3,param_5,0), iVar2 == 0)) {
    return 0;
  }
  if ((param_4 & 8) != 0) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar1);
    if (iVar2 != 0) {
      local_28 = 0;
      local_2c = 0;
      local_27 = 0;
      iVar3 = FUN_0048bedc(param_1[1],param_2,&local_30);
      if (iVar3 == 0) {
        return 0;
      }
      FUN_0030a82c(&local_2c,iVar2);
      local_3c = 0;
      local_3b = 0;
      local_3a = 0;
      local_39 = 0;
      local_38 = 0;
      iVar2 = FUN_0030a784(&local_2c,&uStack_44,local_30,0);
      uVar1 = uStack_44;
      if (iVar2 == 0) {
        return 0;
      }
      uStack_44 = param_5;
      iVar2 = FUN_0030a6bc(param_1,uVar1,uStack_40,param_3,param_4);
      if (iVar2 == 0) {
        return 0;
      }
      return 1;
    }
    if (param_6 != -1) {
      param_2 = param_6;
    }
    puVar4 = (uint *)FUN_0048bf9c(param_1[1],param_2);
    uVar5 = 0;
    if (*puVar4 != 0) {
      do {
        if ((param_4 & 8) != 0) {
          uVar1 = FUN_0048be78(param_1[1],puVar4[uVar5 + 1]);
          iVar2 = FUN_0030a884(param_1,uVar1,param_3,param_5,1);
          if (iVar2 == 0) {
            return 0;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar4);
    }
  }
  return 1;
}
