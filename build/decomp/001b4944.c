// OoT3D decomp @ 001b4944  name=FUN_001b4944  size=732

void FUN_001b4944(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0xd88) == DAT_001b4c6c) {
    return;
  }
  local_20 = *(undefined4 *)(param_1 + 0xe9c);
  local_1c = *(undefined4 *)(param_1 + 0xea0);
  local_18 = *(undefined4 *)(param_1 + 0xea4);
  FUN_00372070(param_1 + 0x148,param_1 + 0x148,&local_20);
  uVar3 = *(ushort *)(param_1 + 0x1c) & 0x7f;
  iVar4 = DAT_001b4c70 + -0x348;
  sVar2 = *(short *)(DAT_001b4c70 + uVar3 * 0x18);
  if (sVar2 == 0x107) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    cVar1 = *(char *)(iVar4 + uVar3 * 0x28);
  }
  else if (sVar2 == 0x108) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    cVar1 = *(char *)(iVar4 + uVar3 * 0x28);
  }
  else if (sVar2 == 0x10c) {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
    cVar1 = *(char *)(iVar4 + uVar3 * 0x28);
  }
  else {
    if (sVar2 != 0x111) goto LAB_001b4b10;
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),8);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),4);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),5);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),6);
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),7);
    pcVar5 = (char *)(iVar4 + uVar3 * 0x28);
    if (-1 < *pcVar5) {
      FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc));
    }
    cVar1 = pcVar5[1];
  }
  if (-1 < cVar1) {
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc));
  }
LAB_001b4b10:
  switch(uVar3) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
    iVar4 = iVar4 + uVar3 * 0x28;
    if (-1 < *(char *)(iVar4 + 2)) {
      FUN_00357a50(param_1 + 0x1a4,(int)*(char *)(iVar4 + 2),4,iVar4 + 4,1);
    }
    if (-1 < *(char *)(iVar4 + 3)) {
      FUN_00357a50(param_1 + 0x1a4,(int)*(char *)(iVar4 + 3),3,iVar4 + 0x14,1);
    }
    if (uVar3 == 8) {
      FUN_00357a50(param_1 + 0x1a4,2,2,DAT_001b4c74,1);
    }
    else if (uVar3 == 0xb) {
      local_24 = *DAT_001b4c78;
      local_20 = DAT_001b4c78[1];
      local_1c = DAT_001b4c78[2];
      local_18 = DAT_001b4c78[3];
      FUN_00357a50(param_1 + 0x1a4,2,2,&local_24,1);
    }
  }
  FUN_0035e3a4(param_1 + 0xeb0,0,(int)*(short *)(param_1 + 0xe20));
  local_24 = 0;
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001b4c80,DAT_001b4c7c,param_1);
  FUN_0035e330(param_1 + 0xeb0);
  return;
}

