// OoT3D decomp @ 002de76c  name=FUN_002de76c  size=532

void FUN_002de76c(int param_1,int param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  iVar4 = *DAT_002de980;
  piVar1 = (int *)*DAT_002de984;
  iVar5 = param_2 - DAT_002de98c;
  if (param_1 == 0xde1) {
    if (*(int *)(iVar4 + *(int *)(iVar4 + 0x58) * 4 + 0x5c) != 0) {
      piVar1 = (int *)piVar1[*(int *)(iVar4 + 0x58) + 0x204];
    }
    puVar2 = (uint *)*piVar1;
    if (param_2 == DAT_002de988) {
      uVar3 = puVar2[0xd];
      goto LAB_002de96c;
    }
    if (param_2 == DAT_002de98c) goto LAB_002de978;
    if (DAT_002de98c <= param_2) goto joined_r0x002de874;
    if (param_2 == 0x1004) goto LAB_002de8a0;
    if (param_2 == 0x2800) goto LAB_002de890;
    if (param_2 == 0x2801) {
      uVar3 = puVar2[1];
      goto LAB_002de96c;
    }
    if (param_2 != 0x2802) {
      return;
    }
  }
  else {
    if (param_1 != 0x8513) {
      return;
    }
    if (*(int *)(iVar4 + *(int *)(iVar4 + 0x58) * 4 + 0x68) == 0) {
      puVar2 = (uint *)piVar1[1];
    }
    else {
      puVar2 = *(uint **)piVar1[*(int *)(iVar4 + 0x58) + 0x207];
    }
    if (param_2 == DAT_002de988) {
      *param_3 = puVar2[0xd];
      param_3[1] = puVar2[0x1e];
      param_3[2] = puVar2[0x2f];
      param_3[3] = puVar2[0x40];
      param_3[4] = puVar2[0x51];
      param_3[5] = puVar2[0x62];
      return;
    }
    if (param_2 == DAT_002de98c) {
LAB_002de978:
      uVar3 = puVar2[3];
      goto LAB_002de96c;
    }
    if (DAT_002de98c <= param_2) {
joined_r0x002de874:
      if (iVar5 == 0x5937) {
        uVar3 = puVar2[5];
      }
      else if (iVar5 == 0x598e) {
        uVar3 = (uint)(byte)puVar2[0xc];
      }
      else {
        if (iVar5 != 0x5cfe) {
          return;
        }
        uVar3 = (uint)(float)puVar2[10];
      }
      goto LAB_002de96c;
    }
    if (param_2 == 0x1004) {
LAB_002de8a0:
      *param_3 = (int)(float)puVar2[6];
      param_3[1] = (int)(float)puVar2[7];
      param_3[2] = (int)(float)puVar2[8];
      param_3[3] = (int)(float)puVar2[9];
      return;
    }
    if (param_2 == 0x2800) {
LAB_002de890:
      uVar3 = *puVar2;
      goto LAB_002de96c;
    }
    if (param_2 == 0x2801) {
      *param_3 = puVar2[1];
      return;
    }
    if (param_2 != 0x2802) {
      return;
    }
  }
  uVar3 = puVar2[2];
LAB_002de96c:
  *param_3 = uVar3;
  return;
}
