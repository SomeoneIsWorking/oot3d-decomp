// OoT3D decomp @ 002ce114  name=FUN_002ce114  size=336

void FUN_002ce114(int *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined4 local_20;
  uint local_1c;
  char local_18;

  local_20 = 0xffffffff;
  local_18 = '\0';
  iVar3 = FUN_00495920(param_1[1],param_2,&local_20);
  cVar1 = '\0';
  if (iVar3 != 0) {
    cVar1 = local_18;
  }
  if (iVar3 != 0 && cVar1 != '\0') {
    uVar4 = (**(code **)(*param_1 + 0xc))(param_1,local_20);
    FUN_0030c3b4(auStack_2c,uVar4,0);
    iVar3 = FUN_0048be04(auStack_2c);
    if (iVar3 == 0) {
      iVar3 = FUN_002c4850(uVar4);
      iVar5 = (**(code **)(*param_3 + 8))(param_3,iVar3 + local_1c * 4 + 4);
      if (iVar5 != 0) {
        FUN_0034338c(iVar5,uVar4,iVar3);
        puVar2 = DAT_002ce264;
        puVar6 = (undefined1 *)(iVar5 + iVar3);
        *puVar6 = *DAT_002ce264;
        puVar6[1] = puVar2[1];
        puVar6[2] = puVar2[2];
        puVar6[3] = puVar2[3];
        FUN_0030c3b4(auStack_38,iVar5,1);
        FUN_002c4814(auStack_38);
        uVar7 = 0;
        if (local_1c != 0) {
          do {
            uVar4 = FUN_0030a560(auStack_2c,uVar7);
            FUN_0030c388(auStack_38,uVar7,uVar4);
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_1c);
        }
        (**(code **)(*param_1 + 8))(param_1,local_20,iVar5);
      }
    }
  }
  return;
}
