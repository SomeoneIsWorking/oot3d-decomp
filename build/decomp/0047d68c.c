// OoT3D decomp @ 0047d68c  name=FUN_0047d68c  size=300

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0047d68c(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  
  cVar1 = *(char *)((int)param_1 + 10);
  if (param_2 == 0) {
    if (cVar1 != '\0') {
      FUN_002ce8a0(*param_1,param_1[0x1f],param_1 + 0x1b,param_1[0x21]);
      iVar3 = *param_1;
      FUN_002ce8e8(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x2c4),0xb60);
      *(undefined1 *)(iVar3 + 0x98) = 1;
      return;
    }
    iVar3 = *param_1;
    FUN_002ce8e8(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x2c4),0);
    *(undefined1 *)(iVar3 + 0x98) = 0;
    return;
  }
  iVar3 = 0;
  if (cVar1 != '\0') {
    iVar3 = param_1[0x20];
  }
  if (cVar1 != '\0' && iVar3 != 0) {
    FUN_0047fe24(param_3,param_1 + 0x1b,param_1[0x21] != 0);
    FUN_00307bd8(*param_3,0xe6,1,0);
    FUN_00307bd8(*param_3,0xe8,0x80,0);
    return;
  }
  puVar2 = *(undefined4 **)(*param_3 + 8);
  *puVar2 = 0;
  puVar2[1] = uRam002dd700;
  *(undefined4 **)(*param_3 + 8) = puVar2 + 2;
  return;
}

