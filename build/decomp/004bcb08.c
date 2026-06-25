// OoT3D decomp @ 004bcb08  name=FUN_004bcb08  size=248

void FUN_004bcb08(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined *)(DAT_004bcc00 + param_1) = 2;
  iVar3 = FUN_0034dd2c(param_1);
  if (iVar3 == 0) {
    uVar5 = 10;
  }
  else if (*(int *)(DAT_004bcc04 + 4) == 0) {
    uVar5 = 7;
  }
  else {
    uVar5 = 0xb;
  }
  uVar4 = FUN_0036c5bc(param_2,0);
  FUN_00332284(uVar4,uVar5);
  iVar3 = DAT_004bcc0c;
  *(undefined4 *)(DAT_004bcc0c + 0xcc) = DAT_004bcc08;
  *(undefined *)(iVar3 + 0xd4) = 1;
  FUN_0036b4ec(param_1 + 0x254,param_2);
  FUN_0034cc78(param_1,param_2);
  sVar2 = FUN_002c036c(param_2,param_1,1);
  *(short *)(param_1 + 0x1758) = sVar2 - *(short *)(param_1 + 0xbe);
  *(ushort *)(param_1 + 0x174a) = *(ushort *)(param_1 + 0x174a) | 0x80;
  if ((*(char *)(DAT_004bcc10 + param_2) < '\0') &&
     (cVar1 = *(char *)(DAT_004bcc10 + param_2) + '\x01', *(char *)(DAT_004bcc10 + param_2) = cVar1,
     cVar1 == '\0')) {
    FUN_003551b4(DAT_004bcc14,param_1,param_2);
    return;
  }
  return;
}

