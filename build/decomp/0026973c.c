// OoT3D decomp @ 0026973c  name=FUN_0026973c  size=392

void FUN_0026973c(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint in_fpscr;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376340(DAT_002698c4,DAT_002698c8,DAT_002698c4,param_2,param_1,5);
  if ((*(byte *)(param_1 + 0x1b5) & 2) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x1e0);
    local_28 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1ca),(byte)(in_fpscr >> 0x15) & 3);
    local_24 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),(byte)(in_fpscr >> 0x15) & 3);
    local_20 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1ce),(byte)(in_fpscr >> 0x15) & 3);
    puVar1 = *(uint **)(param_1 + 0x1e0);
    uVar2 = 0;
    if (puVar1 != (uint *)0x0) {
      uVar2 = *puVar1;
    }
    if (puVar1 == (uint *)0x0 || (uVar2 & 0x80) == 0) {
      *(undefined2 *)(param_1 + 0x11a) = 0;
      FUN_00369674(param_1,3);
      *(undefined4 *)(param_1 + 0x6c) = DAT_002698cc;
      *(undefined1 *)(param_1 + 0x989) = 0x96;
      *(ushort *)(param_1 + 0x978) = *(ushort *)(param_1 + 0x978) | 4;
      FUN_00375bcc(param_1,DAT_002698d0);
      uVar3 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        uVar3 = *puVar4;
      }
      FUN_003741e4(param_2,uVar3,0,&local_28,0);
    }
    else {
      FUN_003741e4(param_2,*puVar4,1,&local_28,0);
    }
  }
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  if ((~*(ushort *)(DAT_002698d4 + 0xfe) & 0xf) != 0) {
    if (*(short *)(param_1 + 0x11a) == 0) {
      *(undefined4 *)(param_1 + 0x13c) = DAT_002698dc;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x13c) = DAT_002698d8;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  *(undefined2 *)(param_1 + 0x11a) = 0;
  return;
}
