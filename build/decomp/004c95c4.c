// OoT3D decomp @ 004c95c4  name=FUN_004c95c4  size=360

void FUN_004c95c4(undefined4 param_1,undefined4 param_2,float *param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_10 [4];

  if (((*(uint *)(DAT_004c972c + 4) & 1) == 0) && (iVar3 = FUN_003679b4(DAT_004c9730), iVar3 != 0))
  {
    FUN_00350820(DAT_004c9734,DAT_004c9738,0x28,0x20);
  }
  puVar1 = DAT_004c973c;
  *DAT_004c973c = (short)(int)*param_3;
  puVar1[1] = (short)(int)param_3[1];
  uVar2 = DAT_004c9740;
  puVar1[2] = (short)(int)param_3[2];
  *(undefined4 *)(puVar1 + 0x28a) = 5;
  *(undefined4 *)(puVar1 + 0x28c) = 5;
  *(undefined1 *)(puVar1 + 0x28e) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x51d) = 0xff;
  *(undefined1 *)(puVar1 + 0x28f) = 10;
  *(undefined1 *)((int)puVar1 + 0x51f) = 0xff;
  *(undefined1 *)(puVar1 + 0x290) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x521) = 0xdc;
  *(undefined1 *)(puVar1 + 0x291) = 0;
  *(undefined1 *)((int)puVar1 + 0x523) = 0xff;
  *(undefined1 *)(puVar1 + 0x292) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x525) = 0xdc;
  *(undefined1 *)(puVar1 + 0x293) = 0;
  *(undefined1 *)((int)puVar1 + 0x527) = 0xff;
  *(undefined1 *)(puVar1 + 0x294) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x529) = 0xdc;
  *(undefined1 *)(puVar1 + 0x295) = 0;
  *(undefined1 *)((int)puVar1 + 0x52b) = 0xff;
  *(undefined1 *)(puVar1 + 0x296) = 0xd2;
  *(undefined1 *)((int)puVar1 + 0x52d) = 0xd2;
  *(undefined1 *)(puVar1 + 0x297) = 0;
  *(undefined1 *)((int)puVar1 + 0x52f) = 0;
  *(undefined1 *)(puVar1 + 0x298) = 0xd2;
  *(undefined1 *)((int)puVar1 + 0x531) = 0xd2;
  *(undefined1 *)(puVar1 + 0x299) = 0;
  *(undefined1 *)((int)puVar1 + 0x533) = 0;
  *(undefined1 *)(puVar1 + 0x29a) = 0xdc;
  *(undefined1 *)((int)puVar1 + 0x535) = 0xdc;
  *(undefined1 *)(puVar1 + 0x29b) = 0;
  *(undefined1 *)((int)puVar1 + 0x537) = 0;
  *(undefined1 *)(puVar1 + 0x29c) = 0xdc;
  *(undefined1 *)((int)puVar1 + 0x539) = 0xdc;
  *(undefined1 *)(puVar1 + 0x29d) = 0;
  *(undefined1 *)((int)puVar1 + 0x53b) = 0;
  *(undefined4 *)(puVar1 + 0x29e) = 0;
  *(undefined4 *)(puVar1 + 0x2a0) = 0x10;
  *(undefined4 *)(puVar1 + 0x286) = uVar2;
  *(undefined4 *)(puVar1 + 0x288) = DAT_004c9744;
  FUN_00350660(param_1,auStack_10,0,0,1,puVar1);
  return;
}
