// OoT3D decomp @ 002d304c  name=FUN_002d304c  size=480

undefined4
FUN_002d304c(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_48 [2];
  char local_40;
  undefined1 auStack_3c [8];
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;

  piStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  uVar1 = FUN_0048be78(param_1[1]);
  if (((param_4 & 4) != 0) && (iVar2 = FUN_0030a884(param_1,uVar1,local_2c,param_5,0), iVar2 == 0))
  {
    return 0;
  }
  if ((param_4 & 8) != 0) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar1);
    if (iVar2 == 0) {
      puVar3 = (uint *)FUN_0048bf9c(param_1[1],param_2);
      uVar4 = 0;
      if (*puVar3 != 0) {
        do {
          if ((param_4 & 8) != 0) {
            uVar1 = FUN_0048be78(param_1[1],puVar3[uVar4 + 1]);
            iVar2 = FUN_0030a884(param_1,uVar1,local_2c,param_5,1);
            if (iVar2 == 0) {
              return 0;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar3);
      }
    }
    else {
      FUN_0030ab10(auStack_3c,iVar2);
      puVar3 = (uint *)FUN_003043ac(auStack_3c);
      uVar4 = 0;
      if (*puVar3 != 0) {
        do {
          uVar5 = puVar3[uVar4 * 2 + 1];
          uVar6 = puVar3[uVar4 * 2 + 2];
          local_48[0] = 0xffffffff;
          local_40 = '\0';
          iVar2 = FUN_00495920(param_1[1],uVar5,local_48);
          if (iVar2 == 0) {
            return 0;
          }
          if (local_40 == '\0') {
            if ((param_4 & 8) != 0) {
              uVar1 = FUN_0048be78(param_1[1],uVar5);
              iVar2 = FUN_0030a884(param_1,uVar1,local_2c,param_5,1);
              goto joined_r0x002d318c;
            }
          }
          else {
            iVar2 = FUN_0030a9a4(param_1,uVar5,uVar6,local_2c,param_5);
joined_r0x002d318c:
            if (iVar2 == 0) {
              return 0;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar3);
      }
    }
  }
  return 1;
}
