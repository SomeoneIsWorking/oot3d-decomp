// OoT3D decomp @ 0030c20c  name=FUN_0030c20c  size=380

void FUN_0030c20c(int param_1,uint param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *local_20;
  
  local_20 = param_4;
  iVar1 = FUN_002c4640();
  if (iVar1 != 0) {
    return;
  }
  while (iVar1 = FUN_002d2fc4(param_1 + 0xb4,&local_20), iVar1 != 0) {
    *(int *)(param_1 + 0x174) = local_20[2];
    piVar2 = local_20;
    if (local_20 != (int *)0x0) {
      do {
        piVar3 = piVar2;
        piVar2 = (int *)*piVar3;
      } while (piVar2 != (int *)0x0);
      iVar1 = piVar3[3];
      *(int *)(param_1 + 0x184) = iVar1;
      *(undefined *)(param_1 + 0x188) = 0;
      if (*(int *)(param_1 + 0x180) == iVar1) {
        *(undefined4 *)(param_1 + 0x184) = 0;
        *(undefined4 *)(param_1 + 0x180) = 0;
      }
    }
  }
  iVar1 = FUN_002c4640(param_1,param_2);
  do {
    while( true ) {
      do {
        if (iVar1 != 0) {
          return;
        }
        iVar1 = FUN_0030c0dc(param_1,1);
        do {
          piVar3 = (int *)FUN_002ce040(param_1 + 0xb4);
          *(int *)(param_1 + 0x174) = piVar3[2];
          piVar2 = piVar3;
          if (piVar3 != (int *)0x0) {
            do {
              piVar4 = piVar2;
              piVar2 = (int *)*piVar4;
            } while (piVar2 != (int *)0x0);
            iVar5 = piVar4[3];
            *(int *)(param_1 + 0x184) = iVar5;
            *(undefined *)(param_1 + 0x188) = 0;
            if (*(int *)(param_1 + 0x180) == iVar5) {
              *(undefined4 *)(param_1 + 0x184) = 0;
              *(undefined4 *)(param_1 + 0x180) = 0;
            }
          }
        } while (piVar3[2] != iVar1);
        iVar1 = 0;
      } while (*(char *)(param_1 + 0x188) != '\0');
      uVar6 = *(uint *)(param_1 + 0x180);
      uVar7 = *(uint *)(param_1 + 0x184);
      uVar8 = uVar6 + param_2;
      if (uVar6 < uVar7) break;
      if (uVar8 <= *(uint *)(param_1 + 0x17c)) goto LAB_0030c348;
      if (param_2 <= uVar7) {
        iVar1 = *(int *)(param_1 + 0x178);
        *(uint *)(param_1 + 0x180) = param_2;
LAB_0030c368:
        if ((iVar1 != 0) && (*(uint *)(param_1 + 0x180) == uVar7)) {
          *(undefined *)(param_1 + 0x188) = 1;
        }
      }
    }
  } while (uVar7 < uVar8);
LAB_0030c348:
  *(uint *)(param_1 + 0x180) = uVar8;
  iVar1 = *(int *)(param_1 + 0x178) + uVar6 * 4;
  goto LAB_0030c368;
}

