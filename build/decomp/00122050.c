// OoT3D decomp @ 00122050  name=FUN_00122050  size=264

void FUN_00122050(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;

  sVar1 = *(short *)(param_1 + 0x1c0) + -1;
  *(short *)(param_1 + 0x1c0) = sVar1;
  uVar2 = DAT_001222b8;
  iVar4 = DAT_001222b4;
  if (sVar1 != 0) {
    return;
  }
  local_30 = *(undefined4 *)(param_1 + 0x28);
  local_2c = *(float *)(param_1 + 0x2c) + DAT_001222b0;
  iVar6 = DAT_001222b4 + 5;
  local_28 = *(undefined4 *)(param_1 + 0x30);
  if (*(char *)(param_1 + 3) == '\f') {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  iVar3 = FUN_0036405c(param_2,(int)*(short *)(param_1 + 0x1c));
  if (iVar3 == 0) {
    uVar5 = (*(ushort *)(param_1 + 0x1c) & 0x3f) << 8 | 0x11;
    FUN_00372244(param_2 + 0x5fcc,0x1e,iVar4);
    if (uVar5 == 0xffffffff) goto LAB_0012229c;
  }
  else {
    uVar5 = 3;
    FUN_00372244(param_2 + 0x5fcc,0x1e,iVar6);
  }
  iVar4 = FUN_0036df58(param_2,&local_30,(short)uVar5);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 100) = uVar2;
    *(undefined2 *)(iVar4 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  }
LAB_0012229c:
  FUN_00374428(param_1);
  return;
}
