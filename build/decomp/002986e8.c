// OoT3D decomp @ 002986e8  name=FUN_002986e8  size=284

void FUN_002986e8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;

  if ((*(uint *)(param_2 + 0x1710) & 0x800) == 0) {
    iVar2 = FUN_003279dc(param_2);
    puVar5 = (undefined1 *)(DAT_00298808 + iVar2 * 4);
    iVar3 = FUN_0036aa20(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                         *(undefined4 *)(param_2 + 0x30),param_1 + 0x208c,param_2,param_1,
                         (int)*(short *)(puVar5 + 2),0,(int)*(short *)(param_2 + 0xbe),0,0);
    if (iVar3 != 0) {
      iVar4 = iVar3;
      if (iVar2 != 0) {
        iVar4 = (int)*(char *)(DAT_0029880c + param_1);
      }
      if (iVar2 == 0 || iVar4 == 0) {
        FUN_00355830(*puVar5,0xffffffff);
      }
      else {
        cVar1 = (char)iVar4 + -1;
        *(char *)(param_1 + 0x5c75) = cVar1;
        if (cVar1 == '\0') {
          *(undefined1 *)(param_1 + 0x5c75) = 0xff;
        }
      }
      *(int *)(param_2 + 0x12b0) = iVar3;
      *(int *)(param_2 + 0x1224) = iVar3;
      *(undefined1 *)(param_2 + 0x12ac) = 0;
      *(short *)(DAT_00298810 + param_2) = *(short *)(iVar3 + 0xbe) - *(short *)(param_2 + 0xbe);
      *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x800;
    }
  }
  else if ('\x01' < *(char *)(DAT_00298804 + param_2)) {
    FUN_0034d688(param_1,param_2,0xff);
    return;
  }
  return;
}
