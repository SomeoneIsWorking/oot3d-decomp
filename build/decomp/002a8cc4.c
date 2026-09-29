// OoT3D decomp @ 002a8cc4  name=FUN_002a8cc4  size=284

void FUN_002a8cc4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;

  iVar4 = DAT_002a8de0;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  iVar4 = iVar4 + (*(ushort *)(param_1 + 0x18) & 1) * 0x2c;
  if (((int)*(short *)(param_1 + 0x1c) << 0x19 < 0) ||
     (iVar1 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c) & 0x3f), iVar1 == 0)) {
    if (((int)*(short *)(param_1 + 0x1c) << 0x11 < 0) ||
       (iVar1 = FUN_0036e864(param_2,(uint)((int)*(short *)(param_1 + 0x1c) << 0x12) >> 0x1a),
       iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 2;
    }
  }
  else {
    iVar1 = 1;
  }
  puVar2 = (undefined4 *)(iVar4 + iVar1 * 0xc);
  iVar3 = FUN_0036aa20(*puVar2,puVar2[1],puVar2[2],param_2 + 0x208c,param_1,param_2,0xff,0,
                       (int)*(short *)(iVar4 + 0x2a),0,
                       (int)(short)((*(byte *)(iVar4 + 0x27) & 3) << 6 |
                                    *(byte *)(iVar4 + 0x28) & 0xf | 0xff00));
  if (iVar3 != 0) {
    if ((*(byte *)(iVar4 + iVar1 + 0x24) & 2) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x128) + 0x22e) = 1;
    }
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0x38) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
