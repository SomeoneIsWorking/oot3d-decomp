// OoT3D decomp @ 0047ec44  name=FUN_0047ec44  size=432

undefined4
FUN_0047ec44(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_5c;
  int local_58 [5];
  undefined1 local_44;
  undefined1 local_43;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;

  local_40 = 0xffffffff;
  local_38 = 0;
  local_3c = 0xffffffff;
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  iVar1 = FUN_0048bf58(*(undefined4 *)(param_1 + 4),param_2,&local_40);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00488358(*(undefined4 *)(param_1 + 4),local_40);
  if (iVar1 == 1) {
    uVar5 = local_40;
    if (local_40 <= local_3c) {
      do {
        if ((param_4 & 1) != 0) {
          uVar2 = FUN_0048be78(*(undefined4 *)(param_1 + 4),uVar5);
          iVar1 = FUN_0030a884(param_1,uVar2,local_2c,param_5,0);
          if (iVar1 == 0) {
            return 0;
          }
        }
        if ((param_4 & 0xc) != 0) {
          local_5c = 0;
          local_44 = 0;
          puVar3 = &local_5c;
          iVar1 = 2;
          local_58[4] = 0;
          local_43 = 0;
          do {
            puVar3[1] = 0xffffffff;
            iVar1 = iVar1 + -1;
            puVar3 = puVar3 + 2;
            *puVar3 = 0xffffffff;
          } while (iVar1 != 0);
          iVar1 = FUN_0048c0b4(*(undefined4 *)(param_1 + 4),uVar5,&local_5c);
          if (iVar1 == 0) {
            return 0;
          }
          uVar4 = 0;
          do {
            if ((local_58[uVar4] != -1) &&
               (iVar1 = FUN_002d304c(param_1,local_58[uVar4],local_2c,param_4,param_5), iVar1 == 0))
            {
              return 0;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < 4);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 <= local_3c);
    }
  }
  else if ((iVar1 == 3) && (uVar5 = local_40, local_40 <= local_3c)) {
    do {
      local_5c = param_2;
      iVar1 = FUN_002d322c(param_1,uVar5,local_2c,param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= local_3c);
  }
  return 1;
}
