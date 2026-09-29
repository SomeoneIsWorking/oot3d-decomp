// OoT3D decomp @ 004232c8  name=FUN_004232c8  size=456

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_004232c8(int *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int local_20 [4];

  local_20[2] = 0xffffffff;
  local_20[3] = 0xffffffff;
  local_20[1] = 0xffffffff;
  if ((short)param_1[3] < 0x28) {
    *(undefined2 *)(param_1 + 3) = 0x28;
  }
  if (*(short *)((int)param_1 + 0xe) < 0x24) {
    *(undefined2 *)((int)param_1 + 0xe) = 0x24;
  }
  if (0x91 < *(short *)((int)param_1 + 0x12)) {
    *(undefined2 *)((int)param_1 + 0x12) = 0x91;
  }
  if (0x91 < (short)param_1[5]) {
    *(undefined2 *)(param_1 + 5) = 0x91;
  }
  if (0x91 < *(short *)((int)param_1 + 0x16)) {
    *(undefined2 *)((int)param_1 + 0x16) = 0x91;
  }
  FUN_00437b98(*(undefined4 *)(*param_1 + 4),param_2,1,local_20,local_20 + 2,local_20 + 1);
  if (local_20[0] < 1) {
    return 0;
  }
  cVar1 = *(char *)((int)param_1 + 0x19);
  if (cVar1 == '\0') {
    FUN_0043786c(param_2 + 3,(int)param_2 + 0xe,(int)(short)param_2[3],
                 (int)*(short *)((int)param_2 + 0xe),(int)(short)param_1[3],
                 (int)*(short *)((int)param_1 + 0x12));
  }
  else if (cVar1 == '\x01') {
    FUN_00437764(param_2 + 3,(int)param_2 + 0xe,(int)(short)param_2[3],
                 (int)*(short *)((int)param_2 + 0xe),(int)*(short *)((int)param_1 + 0xe),
                 (int)(short)param_1[5]);
  }
  else if (cVar1 == '\x02') {
    FUN_0043794c(param_2 + 3,(int)param_2 + 0xe,(int)(short)param_2[3],
                 (int)*(short *)((int)param_2 + 0xe),(int)(short)param_1[4],
                 (int)*(short *)((int)param_1 + 0x16));
  }
  if ((char)param_1[6] != '\0') {
    param_1[2] = *param_2;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  uVar2 = *param_2 & 0xffffdfff;
  *param_2 = uVar2;
  param_2[1] = (uVar2 ^ param_1[2]) & ~param_1[2];
  param_2[2] = param_1[2] & ~uVar2;
  iVar3 = FUN_002fa404();
  if ((iVar3 != 0) && (iVar3 = FUN_0031006c(), iVar3 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined2 *)((int)param_2 + 0xe) = 0;
  }
  param_1[2] = *param_2;
  FUN_00437af0(param_2);
  return 1;
}
