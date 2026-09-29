// OoT3D decomp @ 002d1a00  name=FUN_002d1a00  size=236

undefined4 FUN_002d1a00(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_2c [12];
  undefined4 local_20 [2];
  char local_18;

  uVar1 = FUN_0048be78(param_1[1]);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar1);
  if (iVar2 != 0) {
    local_20[0] = 0xffffffff;
    local_18 = '\0';
    iVar3 = FUN_00495920(param_1[1],param_2,local_20);
    if (iVar3 != 0) {
      if (local_18 == '\x01') {
        FUN_0030c3b4(auStack_2c,iVar2,1);
        if (param_3 == -1) {
          uVar4 = FUN_0048bdf8(auStack_2c);
          uVar5 = 0;
          if (uVar4 != 0) {
            do {
              iVar2 = FUN_0030a560(auStack_2c,uVar5);
              if (iVar2 == 0) {
                return 0;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar4);
          }
        }
        else {
          iVar2 = FUN_0030a560(auStack_2c,param_3);
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}
