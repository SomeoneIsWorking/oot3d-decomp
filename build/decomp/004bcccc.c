// OoT3D decomp @ 004bcccc  name=FUN_004bcccc  size=172

void FUN_004bcccc(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  char *pcVar5;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12bc) != *(char *)(param_1 + 0x12bd)) {
    *(uint *)(iRam004bcd78 + 0x15c) = (uint)*(byte *)(param_1 + 0x2a6);
    FUN_00334c44(param_1);
    uVar2 = uRam004bcd7c;
    cVar1 = *(char *)(param_1 + 0x12bc);
    *(char *)(param_1 + 0x12bd) = cVar1;
    *(undefined4 *)(param_1 + 0x24ac) = uVar2;
    *(undefined4 *)(param_1 + 0x24b0) = uVar2;
    *(undefined4 *)(param_1 + 0x24b4) = uVar2;
    if (((cVar1 != '\x01' && cVar1 != '\b') && cVar1 != '1') && cVar1 != '\a') {
      FUN_0036b02c(param_2,param_1);
    }
    FUN_00334ba8(param_2,param_1,0,iRam004bcd80 + (uint)*(byte *)(param_1 + 0x12bc) * 8);
  }
  pcVar5 = (char *)(iRam004bcd84 + (uint)*(byte *)(param_1 + 0x12bc) * 8);
  iVar4 = (int)*pcVar5;
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      (**(code **)(pcVar5 + 4))(param_2,param_1,0,*(code **)(pcVar5 + 4),unaff_r4,in_lr);
    }
  }
  else {
    (**(code **)(DAT_00334c38 + iVar4 * 4))(param_2,param_1,*(undefined4 *)(pcVar5 + 4));
  }
  iVar4 = DAT_00334c3c;
  if (((*(uint *)(DAT_00334c3c + 0x15c) & 4) != 0) && ((*(byte *)(param_1 + 0x2a6) & 4) == 0)) {
    pfVar3 = (float *)(*(int *)(param_1 + 0x2d0) + (uint)*(byte *)(param_1 + 0x2c9) * 0x34 + 0x1c);
    *pfVar3 = *pfVar3 / *(float *)(*(int *)(DAT_00334c40 + param_1) + 8);
    *(undefined4 *)(iVar4 + 0x15c) = 0;
  }
  return;
}

