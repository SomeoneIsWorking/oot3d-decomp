// OoT3D decomp @ 00336288  name=FUN_00336288  size=248

undefined4 FUN_00336288(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;

  uVar3 = 0;
  if (*(int *)(param_2 + 0x1224) != 0) {
    iVar2 = FUN_00355a60(param_2);
    if (iVar2 == 0) {
      if (*(int *)(DAT_00336380 + 4) == 0) {
        uVar1 = 3;
      }
      else {
        uVar1 = 6;
      }
      if (*(short *)(DAT_00336384 + 0x94) == 1) {
        *(short *)(param_1 + 0x2e1c) = *(short *)(param_1 + 0x2e1c) + -1;
      }
      else if (*(char *)(param_1 + 0x5c74) == '\0') {
        FUN_00355830(uVar1,0xffffffff);
      }
      else {
        *(char *)(param_1 + 0x5c74) = *(char *)(param_1 + 0x5c74) + -1;
      }
      if (*(char *)(param_1 + 0x5c74) == '\x01') {
        *(undefined1 *)(param_1 + 0x5c74) = 0xf1;
      }
    }
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00336388 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(char *)(DAT_00336394 + param_2) = (char)(int)(DAT_0033638c / fVar4 + DAT_00336390);
    *(undefined4 *)(*(int *)(param_2 + 0x1224) + 0x124) = 0;
    *(undefined4 *)(param_2 + 0x1224) = 0;
    *(undefined4 *)(param_2 + 0x128) = 0;
    uVar3 = 1;
  }
  return uVar3;
}
